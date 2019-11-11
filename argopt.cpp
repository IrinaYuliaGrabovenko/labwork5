#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>



int main (int argc, char **argv)
{
  int p;
  int c = 0, a = 0, f = 0, l = 0, h = 0, v = 0;
 

  while (true)
    {
      static struct option long_options[] =
        {
          
          {"create",     no_argument, 0, 'c'},
          {"add",  no_argument,0, 'a'},
          {"file",  no_argument, 0, 'f'},
          {"list",    no_argument, 0, 'l'},
	  {"help",no_argument,0,'h'},
	  {"version",no_argument,0,'v'},
         
        };
      
      int option_index = 0;

      p = getopt_long (argc, argv, "acflhv",
                       long_options, &option_index);

     
      if (p == -1)
        break;

      switch (p)
        {

        case 'a':
	  if (a == 0) {
          	puts ("opt -a");
		a = 1;
	  }
          break;


	case 'c':
	  if(c == 0){
	  	puts("opt -c");
		c = 1;
		
	  }
	  break;

        case 'f':
	  if (f == 0) {
          	puts ("opt -f");
		f = 1;
	  }
          break;

        case 'l':
	  if (l == 0) {
          	puts("opt -l");
		l = 1;
        	
	  }	
	  break;

        case 'h':
	  if (h == 0) {
          	puts("opt -h");
          	h = 1;
		
	  }	
	  break;

	case 'v':
          if (v == 0) {
                puts("opt -v");
                v = 1;

          }
          break;



        case '?':
          break;

        default:
          break;
        }
    }

  

  if (optind < argc)
    {
      printf ("non-option ARGV-elements: ");
      while (optind < argc)
        printf ("%s ", argv[optind++]);
      putchar ('\n');
    }

  exit (0);
}
