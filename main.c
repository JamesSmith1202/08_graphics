#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"
#include "stack.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * polygons;
  struct stack * cs;

  edges = new_matrix(4, 4);
  cs = new_stack();
  polygons = new_matrix(4, 4);

  if ( argc == 2 )
    parse_file( argv[1], cs, edges, polygons, s );
  else
    parse_file( "stdin", cs, edges, polygons, s );

  free_matrix( edges );
  free_stack( cs );
  free_matrix( polygons );

}
