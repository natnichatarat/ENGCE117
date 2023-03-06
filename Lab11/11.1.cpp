#include <stdio.h>

int BinSearch( int arr[], int n, int x){
	 int i= 0, j= n-1, k, pos;
    while( i < j ){
        k = (i+j)/2;
        if( arr[k] < x ){
            i = k+1;
        }else{
            j = k;
        }
    }// end loop
    pos = ( arr[i] == x ? i : -1 );
    return pos;
}//end function


int main() {
    int data[ 6 ] = { 1, 2, 3, 4, 5, 7 } ;
    int n = 6, find = 5 ;
    int pos = BinSearch( data, n, find ) ;
    printf("Found %d at %d\n", find, pos);
    return 0 ;
}
   
