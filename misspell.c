/*
 * Copyright (c) 2013 Akarsh Simha <akarsh.simha@kdemail.net>
 * Released under the GNU General Public License v2 (or later)
 * See the README.md and LICENSE files for more details.
 */

#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


int main( int argc, char *argv[] ) {
    /* Take the first argument and misspell it */

    char *string;
    char c;
    int index = 0;
    int count = 0;

    string = strdup( argv[1] );
    srand( time(0) );
    
    for( index = 0; index < strlen( string ); ++index ) {
        if( rand() % 20 > 18 + count ) {
            if( strlen( string ) > 2 && index < strlen( string ) - 2 && index > 0 ) { /* Do not alter the first or last letter. */
                c = string[ index ];
                string[index] = string[ index + 1 ];
                string[ index + 1 ] = c;
                count++; /* number of misspellings */
            }
        }
        /*
        if( rand() % 20 > 18 + count && index < strlen(string) - 1) {
            string[index] = string[ index + 1 ];
            count++;
        }
        */

    }
    printf( "%s\n", string );
}


