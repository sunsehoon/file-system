#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
void myls(char *request,file_st *myfs){
	char arr[1000]="",fname[5]="";
	short dfn;
	sscanf(request,"%*s %s",arr);
	if(arr[0]==0){ //현재 경로
		dfn=*((short *)(myfs->data[myfs->inode[now].dir_b].save+4));
		printf(".\n..\n");
		for(int i=0;i<dfn;i++){
			strncpy(fname,(myfs->data[myfs->inode[now].dir_b].save+6+6*i),4);
			fname[4]=0;
			printf("%s\n",fname);
		}
	}
	else {

	}

}
