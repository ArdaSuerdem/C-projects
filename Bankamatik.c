#include <stdio.h>
#include <unistd.h> //sleep çalýþsýn diye


int main() {
        int r,sifre,hesaptakiPara=1000;
        printf("Hosgeldiniz");
        printf("\nSifrenizi giriniz: ");
        scanf("%d",&sifre);
        printf("Dogrulaniyor");
        for(int i=0;i<3;i++){
                printf(".");
                sleep(1);
        }
        printf("\n"); // yanlýþ þifre girilmesi durumunda hatayý alt satýrda versin diye
        int x;
        if (sifre== 4598 ){x=1;        }
        else {
                x=2;
        }
        switch(x) {
                case 1: {
                        char y;
                        c1:
                        printf("\n1-Para yatirma\n2-Para cekme\n3-EFT/Havale\n4-Bakiye sorgulama\n5-Kart iade");
                    printf("\nYapmak isteginiz islemi seciniz:");
                    scanf(" %c",&y);
                    switch(y) {
                            case '1': {
                                    int para,para2;
                                    char cevap;
                                    printf("Parayi yerlestirin: ");
                                    scanf("%d",&para);
                                    printf("Yerlestirilen Para:%d",para);
                                    printf("\n Onayliyorsaniz e ye daha fazla para koymak istiyorsanýz d ye basýnýz: ");
                                    scanf(" %c",&cevap);
                                    if(cevap='d'){
                                    hesaptakiPara+=para;
                                    printf("islem tamamlandi");
                                    printf("\nKart iade icin lutfen 1'e, ana menuye donmek ve baska bir islem yapmak icin lutfen 2 ye basiniz: ");
                                        scanf("%d",&r);
                                        if(r==2){
                                        goto c1; // sistem kullanýcý izin vermediði müddetçe durmayýp baþa sarsýn diye        
                                        }
                                        else{
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        return 0;}        
                                        }
                                        else{
                                        printf("Parayi yerlestirin: ");
                                    scanf("%d",para2);
                                    hesaptakiPara+=para+para2;
                                    printf("islem tamamlandi");
                                    printf("\nKart iade icin lutfen 1'e, ana menuye donmek ve baska bir islem yapmak icin lutfen 2 ye basiniz: ");
                                    scanf("%d",&r);
                                        if(r==2){
                                        goto c1;        
                                        }
                                        else{
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        return 0;}
                                        }
                                break;        
                            }
                            case '2' :{
                                    int para;
                                    printf("Cekmek istediginiz miktari giriniz: ");
                                    scanf("%d",&para);
                                    if(para <= hesaptakiPara){
                                    printf("Parayi alin");
                                    printf("\nislem tamamlandi");
                                        hesaptakiPara-=para;        
                                        }
                                    else{
                                    printf("Hesabinizda bu islem icin yeteri kadar para bulunmamaktadir");
                                        }
                                        printf("\nBakiye: %d",hesaptakiPara);
                                        printf("\nKart iade icin lutfen 1'e, ana menuye donmek ve baska bir islem yapmak icin lutfen 2 ye basiniz: ");
                                    scanf("%d",&r);
                                        if(r==2){
                                        goto c1;        
                                        }
                                        else{
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        return 0;}
                                        break;
                                }
                            case '3': {
                                    int IBAN,para;
                                    printf("Para gondermek istediginiz hesabin IBAN nosunu giriniz: ");
                                    scanf("%d",&IBAN);
                                    printf("Gondermek istediginiz miktari giriniz: ");
                                    scanf("%d",&para);
                                    if(para <= hesaptakiPara){
                                    printf("islem tamamlandi");
                                        hesaptakiPara-=para;        
                                        }
                                    else{
                                    printf("Hesabinizda bu islem icin yeteri kadar para bulunmamaktadir");
                                        }
                                        printf("\nBakiye: %d",hesaptakiPara);
                                        printf("\nKart iade icin lutfen 1'e, ana menuye donmek ve baska bir islem yapmak icin lutfen 2 ye basiniz: ");
                                        scanf("%d",&r);
                                        if(r==2){
                                        goto c1;        
                                        }
                                        else{
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        return 0;
                                        }
                                        break;}
                                case '4' : {
                                        printf("\nBakiye: %d",hesaptakiPara);
                                        printf("\nKart iade icin lutfen 1'e, ana menuye donmek ve baska bir islem yapmak icin lutfen 2 ye basiniz: ");
                                        scanf("%d",&r);
                                        if(r==2){
                                        goto c1;        
                                        }
                                        else{
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        return 0;}
                                        break;
                                }
                                case '5' : {
                                        printf("Kartinizi alin");
                                        printf("\nHoscakalin, yine bekleriz");
                                        break;
                                }
                        }
                        break;
                }
                case 2 : {
                        while(sifre!=4598){
                         printf("Yanlis sifre");
                         printf("\nSifrenizi giriniz: ");
                 scanf("%d",&sifre);
                        }
                        if(sifre==4598){
                        goto c1;}
                        return 0;
                        break;
                }
                default: {
                 break;} 
                }
return 0;
}
