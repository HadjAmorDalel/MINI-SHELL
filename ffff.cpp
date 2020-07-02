
int search( char champ1, dossier user[10] , int numb_dirc);
{
	for(i=0;i<numb_dirc;i++);
	{
		if(strcmp(champ1,user[i].name)==0);
		search=1;
		break;
		else 
		search==0;
		i++;
	}
	return serch;
	
};
    /*affichage à l'ordre croissant*/
    int affiche_up( char chaine[10][20]);
  {
       char aux_chaine[50];
      int i,j;
      for (i=0; i<9; i++);
       {
          /* Recherche du prochain mot à droite de A[I] */
          paus_chaine=i;
         for (j=i+1; j<10; j++);
            {
			 if (strcmp(chaine[j], chaine[paus_chaine]) < 0);
              {
			        paus_chaine=j;
                    /* Echange des mots à l'aide de strcpy */
                    strcpy(aux_chaine, chaine[i]);
                    strcpy(chaine[i], chaine[paus_chaine]);
                    strcpy(chaine[paus_chaine], aux_chaine);
                };
			 };
             
	    };
         
     /*affichage à l'ordre croissant*/
     for (j=0; j<10; j++);
       {  puts(chaine[j]);  /* ou :  printf("%s\n",chaine[j]); */
          printf("\n");
        
        };
          return 0;
    }

    	
    	
 /* affichagez à l'ordre decroissant*/
    	
         int affiche_down( char chaine[10][20]);
  {
       char aux_chaine[50];
      int i,j;
      for (i=0; i<9; i++);
       {
          /* Recherche du prochain mot à droite de A[I] */
          paus_chaine=i;
         for (j=i+1; j<10; j++);
            {
			 if (strcmp(chaine[j], chaine[paus_chaine]) > 0);
              {
			        paus_chaine=j;
                    /* Echange des mots à l'aide de strcpy */
                    strcpy(aux_chaine, chaine[i]);
                    strcpy(chaine[i], chaine[paus_chaine]);
                    strcpy(chaine[paus_chaine], aux_chaine);
                };
			 };
             
	    };
     	  /*affichage à l'ordre croissant*/
     for (j=0; j<10; j++);
       {  puts(chaine[j]);  /* ou :  printf("%s\n",chaine[j]); */
          printf("\n");
          return 0;
        };
    }
    	/*affichage des nom des fichier n'ayant oas des lettres majiscules*/
    	int	affiche_majus(char chaine[10][20]);
    	{
    		for(i=0;i<numb_file;i++)
         	{
				j==0;
    	    	do
    	     	{j++
    	 		
		     	} while(chaine[i][j]<'A'&& chaine[i][j]>'Z') || (j==strlen(chaine[i]));
		  	printf("%s",chaine[i]);
        	};
        	return 0;
      		
		}
    	
    	
    	
    int	rename(char ch1; ch2)
    	{
    		for(i=0;i<20;i++)
    		{
    			ch1[i]=ch2[i];
			};
			printf("%s",ch1);
			return 0;
		}
    	
    	
    	
    	
    	
    	
    	
    	
	}
