#include<stdio.h>
#include<stdint.h>

int main() {
    int a;
    printf("Nhap so nguyen bat ky =");
    scanf("%d", &a);
    if(a<0|| a>9999999)
    {
        printf("negetive");
        }
        else 
        {
            switch (a/1000000) // doc so hang trieu
            {
            case 1: printf("Mot Trieu "); break;
            case 2: printf("Hai Trieu "); break;
            case 3: printf("Ba Trieu "); break;
            case 4: printf("Bon Trieu "); break;
            case 5: printf("Nam Trieu "); break;
            case 6: printf("Sau Trieu "); break;
            case 7: printf("Bay Trieu "); break;
            case 8: printf("Tam Trieu "); break;
            case 9: printf("Chin Trieu "); break;
            }
            switch ((a/100000)%10) // doc so hang tram Nghin
            {
            case 1: printf("Mot Tram Nghin "); break;
            case 2: printf("Hai Tram Nghin "); break;
            case 3: printf("Ba Tram Nghin "); break;
            case 4: printf("Bon Tram Nghin "); break;
            case 5: printf("Nam Tram Nghin "); break;
            case 6: printf("Sau Tram Nghin "); break;
            case 7: printf("Bay Tram Nghin "); break;
            case 8: printf("Tam Tram Nghin "); break;
            case 9: printf("Chin Tram Nghin "); break;
            }
           switch ((a/10000)%10) // doc so hang chuc Nghin
            {
            case 1: printf("Muoi Nghin "); break;
            case 2: printf("Hai Muoi Nghin "); break;
            case 3: printf("Ba Muoi Nghin "); break;
            case 4: printf("Bon Muoi Nghin "); break;
            case 5: printf("Nam Muoi Nghin "); break;
            case 6: printf("Sau Muoi Nghin "); break;
            case 7: printf("Bay Muoi Nghin "); break;
            case 8: printf("Tam Muoi Nghin "); break;
            case 9: printf("Chin Muoi Nghin "); break;
            }
            switch ((a/1000)%10) // doc so hang nghin
            {
            case 1: printf("Mot Nghin "); break;
            case 2: printf("Hai Nghin "); break;
            case 3: printf("Ba Nghin "); break;
            case 4: printf("Bon Nghin "); break;
            case 5: printf("Nam Nghin "); break;
            case 6: printf("Sau Nghin "); break;
            case 7: printf("Bay Nghin "); break;
            case 8: printf("Tam Nghin "); break;
            case 9: printf("Chin Nghin "); break;
            }

            switch ((a/100)%10) // doc so hang tram
            {
            case 1: printf("Mot Tram "); break;
            case 2: printf("Hai Tram "); break;
            case 3: printf("Ba Tram "); break;
            case 4: printf("Bon Tram "); break;
            case 5: printf("Nam Tram "); break;
            case 6: printf("Sau Tram "); break;
            case 7: printf("Bay Tram "); break;
            case 8: printf("Tam Tram "); break;
            case 9: printf("Chin Tram "); break;
            }
            if((a/100)%10 == 0 && a != 0)
            {
            printf("lẻ ");
            }
            switch ((a/10)%10) // doc so chuc
            {
            case 1: printf("Muoi "); break;
            case 2: printf("Hai Muoi "); break;
            case 3: printf("Ba Muoi "); break;
            case 4: printf("Bon Muoi "); break;
            case 5: printf("Nam Muoi "); break;
            case 6: printf("Sau Muoi "); break;
            case 7: printf("Bay Muoi "); break;
            case 8: printf("Tam Muoi "); break;
            case 9: printf("Chin Muoi "); break;
            }
            switch (a%10) // doc so hang don vi
            {
            case 0: printf(""); break;    
            case 1: printf("Mot."); break;
            case 2: printf("Hai."); break;
            case 3: printf("Ba."); break;
            case 4: printf("Bon."); break;
            case 5: printf("Lam."); break;
            case 6: printf("Sau."); break;
            case 7: printf("Bay."); break;
            case 8: printf("Tam."); break;
            case 9: printf("Chin."); break;
            
            }
            
        }
    
      }
