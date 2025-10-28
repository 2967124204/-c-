#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(NULL));
int a,b,c,d,e; 
printf("欢迎到断桥烟雨的游戏\n你的名字是周子豪\n面对着比你强大数倍的怪物，利用你的智慧打败他吧\n");
printf("怪物出现了！！！你会怎么做呢？\n");
printf("角色血量100\n");
printf("怪物血量1000\n");
a=100;
b=1000;
while(1){
	printf("你现在有两个选择：1发动攻击，2进行治疗。注意：满血将不会得到回复,请谨慎使用\n");
	printf("做出你的选择吧勇士！\n");
	scanf("%d",&c);
	if(c==1) {
		d=rand()%51+50;//50~100
		b=b-d;
		printf("怪物受到了%d的伤害，并发出了愤怒的怒吼\n",d);
		printf("怪物血量只剩下%d,你离成功又近了一步，加油\n",b); 
		
	}
	if (c==2){
		if (a==100){
			printf("不好意思，你的血量已经超标了哦~\n"); 
		}
		else if (a>=60&&a<=99){
			a=100;
			printf("你得到了回复，现在你的血量是%d\n",a);
		}
		else{a=a+40;
			printf("你得到了回复，现在你的血量是%d\n",a);
		}
		}
		e=rand()%11+30;//(上街减下界加上一再加上下界 30~40
		a=a-e;
	printf("怪兽对你发动了进攻，并造成了%d的伤害，你的血量还有%d\n",e,a);
	if(a<=0){
		printf("太可惜了，你没有打败怪兽，再接再厉！\n");
		break;
	}
	if(b<=0){
		printf("你真是太厉害了！打败了可恶的怪兽，恭喜你！\n") ;
		break;
	}
	
	 
} 


return 0;
} 
