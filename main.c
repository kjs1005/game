#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include <time.h>
int q[4];  //��X�n���D�ة�b�o�̡A�ݥ|�Ӧ�m
char a[500];  //�����ϥΪ̿�J���Ʀr 
int a_int[4];  //��ϥΪ̿�J���r���ন�Ʀr���b�o�|�Ӧ�m 
int ifclear = 0;  //���L�ȥΡA��ܹL���P�_�A�@�}�l��M�S�L���A�ҥH�O0 
int tocontinue = 1;  //���L�ȥΡA��ܭn�~��C���P�_ 
int k=0; 

int toquit = 0;  //���L�ȥΡA��ܭn���X�C���P�_ 
int toquit2 = 0;
int toquit3 = 0;
int toquit4 = 0;
int toquit5 = 0;
int toquit6 = 0;  //���L�ȥΡA��ܭn���X�C���P�_ 
int toquit7 = 0;
int toquit8 = 0;
int toquit9 = 0;
int toquit10 = 0;

void makeQ1(void);  //�X�D 

void getA();  
void getA2();
void getA3();  
void getA4();
void getA5();  
void getA6();  
void getA7();
void getA8();  
void getA9();
void getA10();  

void outcome(void);  
void outcome2(void);
void outcome3(void);  
void outcome4(void);
void outcome5(void);  
void outcome6(void);  
void outcome7(void);
void outcome8(void);  
void outcome9(void);
void outcome10(void);  

void intro1(void);  
void intro2(void);
void intro3(void);  
void intro4(void);
void intro5(void);  
void intro6(void);  
void intro7(void);
void intro8(void);  
void intro9(void);
void intro10(void);  

void level1(void); 
void level2(void);
void level3(void); 
void level4(void);
void level5(void); 
void level6(void);
void level7(void);
void level8(void);
void level9(void);
void level10(void);

int main(void){  

	intro1();  
    level1();
    printf("\n");
		
	do
	{
	toquit2=0;
	tocontinue=0;
	k=0;
	intro2();
    level2();
    printf("\n");
	}	while(!ifclear)	;

	
	do
	{
	toquit3=0;
	tocontinue=0;
	k=0;
	intro3();
    level3();
    printf("\n");
	}	while(!ifclear)	;

	
	do
	{
	toquit4=0;
	tocontinue=0;
	k=0;
	intro4();
    level4();
    printf("\n");
	}	while(!ifclear)	;

	
	do
	{
	toquit5=0;
	tocontinue=0;
	k=0;
	intro5();
    level5();
    printf("\n");
	}	while(!ifclear)	;
	
		
	do
	{
	toquit6=0;
	tocontinue=0;
	k=0;
	intro6();
    level6();
    printf("\n");
	}	while(!ifclear)	;	
	

	do
	{
	toquit7=0;
	tocontinue=0;
	k=0;
	intro7();
    level7();
    printf("\n");
	} while(!ifclear)	;
		
	
	do
	{
	toquit8=0;
	tocontinue=0;
	k=0;
	intro8();
    level8();
    printf("\n");
	}	while(!ifclear)	;	

	
	do
	{
	toquit9=0;
	tocontinue=0;
	k=0;
	intro9();
    level9();
    printf("\n");
	}	while(!ifclear)	;
		
	do
	{
	toquit10=0;
	tocontinue=0;
	k=0;
	intro10();
    level10();
    printf("\n");
	}	while(!ifclear)	;
		
   system("pause");
   return 0;
}

void level1(void)
{
		
        ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            getA();
        
        if(toquit) break;
    } 
	
}
void level2(void)
{
		k=0;
	    ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
           // k++;
			getA2();
        
       if(toquit2 ) break;
}
}
void level3(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA3();
			if(toquit3 ) break;
        }
 } 
void level4(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA4();
			if(toquit4 ) break;
        }
}
void level5(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA5();
			if(toquit5) break;
        }
}
void level6(void)
{
		k=0;
	    ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA6();
        
       if(toquit6) break;
}
}
void level7(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA7();
			if(toquit7) break;
        }
 } 
void level8(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
    
			getA8();
			if(toquit8) break;
        }
}
void level9(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA9();
			if(toquit9) break;
        }
}
void level10(void)
{
		k=0;
		ifclear =0;
        tocontinue = 1;
        makeQ1();  
        while(tocontinue){
            
			getA10();
			if(toquit10) break;
        }
}

void intro1(void)
{
    printf("  �q�Ʀr�C��  \n");
	printf("  �Ĥ@��\n") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  2.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  3.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  4.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
  
    
}
void intro2(void)
{
	printf("  �ĤG��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��50��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
    
}
void intro3(void)
{
	printf("  �ĤT��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��45��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
 } 
void intro4(void)
{
	printf("  �ĥ|��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��40��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
 } 
void intro5(void)
{
	printf("  �Ĥ���") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��35��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
} 
void intro6(void)
{
	
	printf("  �Ĥ���\n") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��30��\n");
    printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
}
void intro7(void)
{
	printf("  �ĤC��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��25��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
 } 
void intro8(void)
{
	printf("  �ĤK��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��20��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
}
void intro9(void)
{
	printf("  �ĤE��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��15��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
}
void intro10(void)
{
	printf("  �ĤQ��") ;  
    printf("  �C���W�h�G                                   \n");
    printf("  1.���ƭ��10��\n");
	printf("  2.��J4�Ӥ����ƪ��Ʀr                        \n");
    printf("  3.�X�{A�����ƥN��A�q��F�X�ӼƦr�B��m���T  \n");
    printf("  4.�X�{B�����ƥN��A�q��F�X�ӼƦr����m����  \n");
    printf("  5.�]�N�O����4A0B���ɭԡA�N�O�A�L�����ɭ�     \n");
 } 

void makeQ1(void)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<4;i++){
        *(q+i) = rand()%5;
        for(j=0;j<i;j++){
            while(*(q+i) == *(q+j)){  //�o��while�O�Ψӷ�Ʀr���ƥX�{�����N�A�@�����ü�
                *(q+i) =5+ rand()%5;
            }
        }
     
    }
}

void getA()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }
            
            outcome();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA2()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }
            k++;
            outcome2();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA3()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome3();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA4()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome4();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA5()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome5();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA6()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome6();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA7()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome7();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA8()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome8();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA9()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome9();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}
void getA10()
{
    printf("\n�п�J: ");
    int i,j;  //�j��M�� 
    int boolin = 1;  //�ΨӪ�ܨϥΪ̬O�_���`��J
    
    fgets(a,sizeof(a),stdin);
    *(a+strlen(a)-1)= '\0'; 
    //�]��fget�u�n���\Ū���A�|�۰ʦb'\0'�e���[�W'\n'�A�ҥH�n��'\n'�ܦ�'\0'�A���M���G�|���p�w���a�h�X1
    
    if(*(a) == 'm' && strlen(a) == 1){  //�u�n�ϥΪ̤@��Jm�N�ߧY�s�X��� 
       // menu();
    }else if(*a == '7' && *(a+1) == '8' && *(a+2) == '1' && *(a+3) == '1' && *(a+4) == '2' && *(a+5) == '3' && strlen(a) == 6){
        printf("�j�°����i�D�A...���׬O�G"); 
        for(i=0;i<4;i++){
            printf("%d",*(q+i));
        }
        printf("\n");
    }else{ 
        
        if(!(strlen(a)==4)){  //�P�_�ϥΪ̬O�_��J�F�|�Ӧr�� 
            boolin *=0;  //��ܨϥΪ̤����`��J 
            printf("�Ф��n��J�Ӧh�ΤӤ�\n");
        }
        for(i=0;i<strlen(a);i++){  //�P�_���ϥΪ̬O�_��J0��9 
            if(!(*(a+i) >= '0' && *(a+i) <= '9')){
                boolin *= 0;
                printf("�п�J�Ʀr0~9\n");
                break;
            }
        }
    
        for(i=0;i<4;i++){  //�P�_�ϥΪ̬O�_��J���ƼƦr 
            for(j=0;j<i;j++){
                while(*(a+i) == *(a+j)){  //�o�̩M�W�z�X�D�Ϊ��O�@�˪���z 
                    printf("�Ф��n��J���ƪ��Ʀr\n");
                    boolin *= 0;
                    break;
                }
                if(!boolin) break;
            }
            if(!boolin) break;
        }
    
        if(boolin){  //boolin�p�G����1�A�]�N�O�ϥΪ̥��`��J�A�~�}�l��r���ন�Ʀr 
            for(i=0;i<4;i++){
                *(a_int+i) = *(a+i) - '0'; 
            }k++;
            outcome10();  //�ন�Ʀr��I�soutcome�ݬݵ��G���XA�XB
        }
    }   
}

void outcome(void)
{
    int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
       tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit = 1;
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
    }
    
}
void outcome2(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit2 = 1;
		
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",50-k);
		if(k==50)
        {
		printf("try again!"); 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit2 = 1;
         ifclear = 0;
		}
    	
	}
}
void outcome3(void)
{
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");

        ifclear = 1; 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
            toquit3 = 1;
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",45-k);
		if(k==45)
        {
		printf("try again!"); 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
			toquit3 = 1;
			ifclear = 0;
		}
    	}
	
}
void outcome4(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  //�]���L���F�A�ҥH�q0�ܦ�1 
        tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
            toquit4 = 1;
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",40-k);
		if(k==40)
        {
		printf("try again!"); 
		 ifclear = 0;
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
		toquit4 = 1;
		}
    	}
	
}
void outcome5(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
  if(k<=10)
    {
   for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
       
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  //�]���L���F�A�ҥH�q0�ܦ�1 
        tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit5 = 1;
	
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",35-k);
		if(k==35)
        {
		printf("try again!"); 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit5 = 1;
        ifclear = 0;
		}
    	}
	}
}
void outcome6(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit6 = 1;
		
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",30-k);
		if(k==30)
        {
		printf("try again!"); 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit6 = 1;
         ifclear = 0;
		}
    	
	}
}
void outcome7(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
		
        ifclear = 1; 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
            toquit7 = 1;
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",25-k);
		if(k==25)
        {
		printf("try again!"); 
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
			toquit7 = 1;
			ifclear = 0;
		}
    	}
	
}
void outcome8(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
   
    for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
    
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  //�]���L���F�A�ҥH�q0�ܦ�1 
        tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
            toquit8 = 1;
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",20-k);
		if(k==20)
        {
		printf("try again!"); 
		 ifclear = 0;
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
		toquit8 = 1; 
		}
    	}
	
}
void outcome9(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
  
   for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
       
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  //�]���L���F�A�ҥH�q0�ܦ�1 
        tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit9 = 1;
	
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
		printf("�Ѿl%d��",15-k);       
	    if(k==15)
        {
		printf("try again!"); 
		ifclear = 0;
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit9 = 1;
		}
    	}
	
}
void outcome10(void)
{
    
	int a=0;  //�XA��A 
    int b=0;  //�XB��B 
    int i,j;  //�j��M�� 
  
   for(i=0;i<4;i++){  //�ϥΨ��for�A�̭���if�@16�� 
        for(j=0;j<4;j++){
            if(*(a_int+i)==*(q+j)){  //���P�_���S���J��ۦP���Ʀr 
                if(i==j){  //�p�G�J��ۦP���Ʀr�A�A�P�_�O���O�b�ۦP����m 
                    a++;  //�ۦP�Ʀr�B�ۦP��m�A����N�o��@��A 
                }else{  //�ۦP�Ʀr���S���Q�P��m�A����N�o��@��B 
                    b++;
                }
            }
        }
    }
       
    if(a==4){  //�p�G��4A�N��ϥΪ̹L���F�I
        printf("���߮��ߡI�A����F�I\n");
        ifclear = 1;  //�]���L���F�A�ҥH�q0�ܦ�1 
        tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit10 = 1;
	
    }else{
        printf("%dA%dB\n",a,b);  //�S�L���A���N��ܴXA�XB 
        printf("�Ѿl%d��",10-k);
		if(k==10)
        {
		printf("try again!"); 
		ifclear = 0;
		tocontinue = 0;  //�o�̤@�ˡA�ݤW����main�N���D������F�I 
        toquit10 = 1;
		}
    	}
	
}
