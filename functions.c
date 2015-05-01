#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include<iostream>

using namespace std;
//Here is a library that include simple algorithms functions used by high school students
//David Burcovschi is the author. All rights rezerved.

//cautare binara
int cautare_binara(int n,int a[9999999],int cautat){
	bool gasit=0;
	if(cautat<a[n/2]){
	for(int i=n/2-1;i>0;i--){
		if(cautat==a[i]){
	        	return i+1;
	                gasit=1;
	                break;
	        }


				}
	}else if(cautat>a[n/2]){
        	for(int i=n/2+1;i<n;i++){
	        	if(cautat==a[i]){
	                	return i+1;
	                	gasit=1;
	                	break;
	                 }


				}
	}else if(cautat==a[n/2]){
        	return n/2+1;
	}
	if(gasit==false){
		return -1;

	}
}

//maxim vector
int maxim_vector(int n,int a[9999999],bool k){
       int maximul=a[0];
       int max_poz=0;
       for(int i=0;i<n;i++){
	        if(a[i]>maximul){
	              maximul=a[i];
	              max_poz=i;
		}
       }
       if(k==true){
	        return max_poz;
       }else{
		return maximul;
       }

}


//maxim vector
int minim_vector(int n,int a[9999999],bool k){
       int minimul=a[0];
       int min_poz=0;
       for(int i=0;i<n;i++){
	        if(a[i]>minimul){
	              minimul=a[i];
	              min_poz=i;
		}
       }
       if(k==true){
	        return min_poz;
       }else{
		return minimul;
       }

}



/*
//maxim matrice
int maxim_matrice(int n,int m, int **a ,bool k){
       a[n][m];
       int maximul=a[0][0];
       int max_pozi=0;
       int max_pozj=0;
       for(int i=0;i<n;i++){
       		for(int j=0;j<m;j++){
	            if(a[i][j]>maximul){
	                   maximul=a[i][j];
	                   max_pozi=i;
	                   max_pozj=j;
	            }
            }
       }
       if(k==true){
	        return max_pozi, max_pozj;
       }else{
		return maximul;
       }

}
*/


//bubble sort descendent
int BubbleSortDescendent(int num[999999],int n)
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = n;
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])      // ascending order simply changes to <
              {
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }



}


//bubble sort ascendent
int BubbleSortAscendent(int num[999999],int n){
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = n;
      for(i = 1; (i <= numLength) && flag; i++){
          flag = 0;
          for (j=0; j < (numLength -1); j++){
               if (num[j+1] < num[j]) {     // ascending order simply changes to < 
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }

}


int NrPrim(int a[999999],int n,int flag){
	int cpa[999999];
	int nr=0;
        int ok=1;
	if(flag==1){//nr de numere prime din un vector
		for(int i=0;i<n;i++){
			if(a[i]==1){
				nr++;
			}else if(a[i]==3){
				nr++;
			}else if(a[i]!=1 && a[i]!=2 && a[i]!=3){
				int d=1;
                        	ok=1;			
				while(d!=a[i]/2){
					if(a[i]%d==0){
						ok=0;
						break;
					}
					d++;
				}
				if(ok==1){
					nr++;
				}
				
			}
		}
		return nr;
	}else if(flag==2){
		for(int i=0;i<n;i++){
			if(a[i]==1){
				return a[i];
			}else if(a[i]==3){
				return a[i];
			}else if(a[i]!=1 && a[i]!=2 && a[i]!=3){
				int d=1;
                        	ok=1;			
				while(d!=a[i]/2){
					if(a[i]%d==0){
						ok=0;
						break;
					}
					d++;
				}
				if(ok==1){
					return a[i];
				}
				
			}
		}
	}
}

#endif // FUNCTIONS_H_INCLUDED
