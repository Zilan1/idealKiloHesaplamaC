#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int boy,skilo,vgke,vgkk,agke,agkk,ide,idk,idke;
    char cinsiyet;

    printf("  ~~~~~Ideal Kilo Hesaplama~~~~~\n\n");
    
    printf("Cinsiyetinizi giriniz[E/K] :");
    scanf(" %c",&cinsiyet);

    printf("Boyunuzu giriniz:");
    scanf(" %d", &boy);

    printf("Kilonuzu giriniz:");
    scanf(" %d",&skilo);

    agke=idke-skilo;
    vgke=idke-skilo;
    
    agkk=idk-skilo;
    vgkk=skilo-idk;
    
    if (cinsiyet == 'e') 
	{
    idk = 50 + ((2.3 / 2.54) * (boy - 152.4));
    
    if ( skilo == idke ) 
	{
    printf("Ideal kilodasiniz.",idke);
    printf("Ideal formdasiniz.");
    }
    else if (skilo <= idke) 
	{
    printf("Ideal kilonuz: %d\n",idke);
    printf("Kilo almaniz gerekiyor.Almaniz Gereken Kilo: %d\n",agke=idke-skilo);
    }

    else if (skilo >= idke) 
	{
    printf("Ideal kilonuz: %d\n",idke);
    printf("Kilo vermeniz gerekiyor.Vermeniz Gereken Kilo: %d\n",vgke=idke-skilo);
    }
    else 
	{
      printf("Lutfen Gecerli Bir Deger Giriniz!");
    }
    }

    else if (cinsiyet == 'k') 
    {
       idk = 45.5 + ((2.3 / 2.54) * (boy - 152.4));

      if (skilo == idk) 
	  {
         printf("Ideal kilodasiniz.",idk);
         printf("Ideal formdasiniz.");
      }
    else if (skilo <=idk) 
	{ 
        printf("Ideal kilonuz: %d\n",idk);
        printf("Kilo almaniz gerekiyor.Almaniz Gereken Kilo: %d\n",agkk=idk-skilo);
    }

    else if (skilo >=idk) 
	{ 
       printf("Ideal kilonuz: %d\n",idk);
       printf("Kilo Vermeniz Gerekiyor.Vermeniz Gereken Kilo: %d\n",vgkk=skilo-idk);
    }
    else 
	{
       printf("Lutfen Gecerli Bir Deger Giriniz!");
    }
    }
    else
	{
       printf("E ve K disinda bir cinsiyet giremessiniz");

    }

	
	
	
	
	
	
	//float s1,s2,s3,ort;
	
	//printf("Birinci Sinav Notunuzu Girin: ");
	//scanf("%f",&s1);
	
	//printf("Ikinci Sinav Notunuzu Girin: ");
	//scanf("%f",&s2);
	
	//printf("Ucuncu Sinav Notunuzu Girin: ");
	//scanf("%f",&s3);
	
	//ort=(s1+s2+s3)/3;
	//printf("Ortalama: %f",ort);	
	
	
	
	
	
	//float s1,s2,s3,ort;
	//s1=80;
	//s2=90;
	//s3=75;
	
	//ort=(s1+s2+s3)/3;
	//printf("Ortalama: %f",ort);
	
	
	
	
	//float s1,s2,bolum;
    //s1=7;
    //s2=7;

    //bolum=s1/s2;
    //printf("%f",bolum);




   //float sayi;
   //sayi=5;
   //printf("%.2f",sayi);
   
   
   
    //int misir,kola,su,bilet,toplam;

    //printf("Bilet Adedi Girin: ");
    //scanf("%d",&bilet);
   
    //printf("Misir Adedi Girin: ");
    //scanf("%d",&misir); 

    //printf("Kola Adedi Girin: ");
    //scanf("%d",&kola); 

    //printf("Su Adedi Girin: ");
    //scanf("%d",&su); 

    //toplam=bilet*8+misir*2+kola*2+su*1;

    //printf("Toplam Tutar: %d",toplam);
    //printf(" TL..");




































	return 0;
}
