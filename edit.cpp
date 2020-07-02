#include<stdio.h>
#include<string.h>

int main()
{
  typedef struct
   {
        char name[50];
 	   char content[10][20];
    }dossier;


 bool shell=true;
  dossier user[10];
  char commande[50], champ1[10], champ2[10], cmd[20],chp1[10],chp2[10];
    int i,j,k;
  for(i=0;i<5;i++);
  for(j=0;j<5;j++);
  for(k=0;k<15;k++);
    {
	 printf("donner le nom de rep:");
     scanf("%s",&user[i]->name );
     printf("%s",user[i].name[50])	;
     scanf("%s",&user[i].content[j][k]);
 	j++;
 	k++;
	 i++;	
    }
    while (shell);
    {
	
    printf("user/>");
    
  scanf("%s",&commande);
  strcpy(cmd,commande);
  
  scanf("%s",&champ1);
  
  scanf("%s",&champ2);
  
  strcat(commande," ");
  strcat(commande,champ1);
  strcat(commande," ");
  strcat(commande,champ2);
  printf("%s",commande);
 
  
   if 	(strcmp(cmd,"show")==0)
    {
    
		  if	(search(champ1,user)==1);
           {
           	if (strcmp(champ2,"-o u")==0);
		         
    	           affiche_up(champ1.content[10][20]);
    	          else	if (strcmp(champ2,"-o d")==0);
    	         
    	         	affiche_down(champ1.content[10][20]);
    	            	else	if(strcmp(champ2,"-c")==0);
    	    	   
    	  	    	affiche_majus(champ1.content[10][20]);
    	  	    	else	if (strcmp(champ2," ")==0);
    	  	      
    	  	 	 	affiche(champ1.content[10][20],numb_file);
    	    }
    	    
    	 	 else	
    	 	 printf("no directory named %s",champ1);
    	}
				
				
				 if (strcmp(cmd,"rename")==0;
				
				{
						if (search(champ1;user)==0);
					rename(champ1,champ2);
					else if (search(champ1;user)==0);
					printf("no directory named %s",champ1);
					else
					{
					 
					    for (i=0;i<n;i++);
					    for(j=0;i<nmb_fich;j++);
				    	if (search(champ1;user[i].content[j])==1);
					     rename(champ1;champ2);
				    	break;
				    	else 
						printf("no file named %s",champ1)
			    	}
				}
				
			
    			
    					 if (strcmp(cmd,"copy")==0);
    						{
    						
					    for (i=0;i<n;i++);
					    for(j=0;i<nmb_fich;j++);
					    {
						
				    	if (search(champ1;user[i].content[j])==1); && 	(search(champ2;user[10])==1);
				    	copy(champ1;champ2);
    							else 
								printf("no file named %s";user[i].content[j]);
    							
							}
    						
    						
    						
    						
    					
    						  else if ( strcmp(cmd,"move")==0);
    						 {
							 
    								
    								for (i=0;i<n;i++);
					                 for(j=0;i<nmb_fich;j++);
					                 {
						
				                  	if search(nom_rep;ch[i].content[j])==1; && 	search(option;ch[10])==1;
				                 	move(nom_rep;option);
    						     	else help(move);
						        	} 
    								
    					    	}
    								else
									help();
    	
	};
	
}
return 0;
}

