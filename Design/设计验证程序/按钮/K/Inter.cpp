#include<stdio.h>
#include <math.h>

void Change_Number_Do(float * num , char set , char add_down ){ //   OK

    // num ��Ҫ�ĵ���
    // set  
        //  0 ��λ
        //  1 ʮλ
        //  2 ��λ       
        //  3 ʮ��λ
        //  4 �ٷ�λ
        //  5 ǧ��λ
    if( add_down == 1 ){    //��
        if( set < 3 ){
        	set = pow(10,set);
            if( (int)( *num / set ) % 10 != 9 )
                *num += set; 
        }
        else {
            float k = pow(0.1,set-2);
            if( (int)( *num / k ) % 10 != 9 )
                *num += k;
        }
    }else {                 //��
        if( set < 3 ){
        	set = pow(10,set);
			if( (int)( *num / set ) % 10 != 0 )
			    *num -= set; 
        }
        else {
        	float k = pow(0.1,set-2);
            if( (int)( *num / k ) % 10 != 0 )
                *num -= k ;
        }
    }
}



int main(){
	int a = 0 ;
	int c = 0 ;
	float b = 0;
	while(1){
		printf("%6.3f\n",b);
		scanf("%d",&a);
		scanf("%d",&c);
		Change_Number_Do(&b,c,a);
	}
	
	
}






