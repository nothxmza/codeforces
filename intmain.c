#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>








/*football
int main(void)
{
    char str[100];
    int i = 0;
    int count = 1;
    int count1 = 1;
    int total = strlen(str);
    scanf("%s",str);
    while(str[i])
    {
        if(str[i] == '1' && str[i+1] == '1')
            count++;
        if(count == 7)
        {
            printf("YES");
            exit(0);
        }
            
        if(count < 7 && str[i+1] != '1')
        {
            count = 0;
            count += 1;
        }
        if(str[i] == '0' && str[i+1] == '0')
            count1++;
        if(count1 == 7)
        {
            printf("YES");
            exit(0);
        }
        if(count1 < 7 && str[i+1] != '0')
        {
            count1 = 0;
            count1 += 1;
        }
        i++;
    }
    if(count < 7 && count1 < 7)
        printf("NO");
}

wrong substration
int main(void)
{
    int nbr;
    int calc;
    scanf("%d %d",&nbr,&calc);
    while(calc-- > 0)
    {
        if (nbr % 10 == 0)
            nbr = nbr /10;
        else
            nbr--;
    }
    printf("%d",nbr);
}
 limak et bob
int main()
{
    int limak = 0;
    int bob = 0;
    int an = 0;

    scanf("%d %d",&limak,&bob);
    while(limak <= bob)
    {
        bob *= 2;
        limak *= 3;
        
        an++;
    }
    printf("%d",an);
}

SOLDAT BANANES
int main(void)
{
  int c = 0;
  int s = 0;
  int b = 0;
  int count = 0;
  int tmp = 0;
  int a = 0;
  int *ba;
  int nbr = 0;
  scanf("%i %i %i",&c,&s,&b);

    while(b > 0)
    {
    
     a = c *b; //3*4
     tmp += a; //12
     b--;
    }
    c = tmp;
    if (s < tmp)
    {
         nbr = c - s;
         printf("%d",nbr);
    }
    else
        printf("0");
}*/

/* voir si meme mot
int main(void)
{
	char str[255];
	char str1[255];
	int j = 0;
	int x = 0;
	int i = 0;
	scanf("%s",str);
	i = strlen(str) - 1;
	//printf("%d",i);
	while(i >= 0)
	{
		str1[x] = str[i];
		//printf("t%c %c\n", str1[x],str[i]);
		x++;
		i--;
	}
	str1[x] = '\0';	
	j = 0;
	x = 0;
	while(str[j])
	{
		if(str[j] != str1[x])
		{
			printf("error");
			exit(EXIT_FAILURE);
		}
		else
			j++;
			x++;
	}
}
*/


/*
int main(void)
{
    char str[255];
    char str1[255];
    int i = 0;
    int x = 0;
    int j=0;
    int w = 0;
    int count = 0;
    scanf("%s",str);
    while(str[i])
        str1[x++] = str[i++];
    str1[x] = '\0';
    i = 0;
    x = 0;
    while(str[i])
    {
        while(str1[x])
        {
            if(str[i] == str1[x])
            {
                w++;
                printf("%c,%c,%d\n",str[i],str1[x],w);
                if(w > 2)
                    count++;
            }
           
            x++;
        }
        w = 0;
        x = 0;
        i++;
    }
    count = strlen(str) - count;
     printf("%d\n",count);
    if(count % 2 == 0)
    {
         printf("CHAT WITH HER!");
          exit(0);
    }
    printf("%d",count);
} 

// boy or girl
//compter les nn doubles
int main(void)
{
   char str[255];
   char str3[255];
   int i = 0;
   int x = 0;
   int j = 0;
   int count;
   int moitier;
   int w = 0;
   int tab = 0;
   count = 0;
   int diff = 0;
   scanf("%s",str);
   while(str[x])
     str3[j++] = str[x++];
 
    str3[j] = '\0';
    j = 0;
    x = 0;
    while(str[x])
    {
        while(str3[j])
        {
            if(str[x] == str3[j])
            {
                 w++;
                 if(w >= 2)
                    i++;
            }
            j++;
        }
        //w = 0;
        j = 0;
        x++;
    }
    printf("W %d\n",w);
    printf("I %d\n",i);
    count = strlen(str3);
    printf("C %d\n",count);

     if (w == count)
     {
		printf("CHAT WITH HER!");
        exit(0);
     }
    if (i > 100)
    {
        // printf("C %d\n",count);
        if (count > i)
           tab = count - i;
        else if (count < i)
          tab = i - count;
      //printf("T %d\n",tab);
      if(i > 300)
      {
          if (i % 2 == 0 && count % 2 != 0)
        {   printf("CHAT WITH HER!");
            exit(0);
        }
      }
      if(tab % 2 == 0)
      {
         printf("CHAT WITH HER!");
         exit(0);
        }
     else
     {
           printf("IGNORE HIM!");
           exit(0);
     }	
    }
    else{   
    if (count > w)
        tab = count - w;
    else if (count < w)
        tab = w - count;
     printf("T %d\n",tab);
    moitier = tab /2;
    if (count > moitier)
        diff = count - moitier;
    else if (count < moitier)
        diff = moitier - count;
    printf("D %d\n",diff);

    //i = i/2;
    //tab = tab - i;
    if(diff % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    }
}*/


 /*int main(void)
{
   char str[100];
   char str3[100];
   int i = 0;
   int x = 0;
   int j = 0;
   int count;
   int w = 0;
   int tab = 0;
   count = 0;
   scanf("%s",str);
   while(str[x])
     str3[j++] = str[x++];
 
    str3[j] = '\0';
    j = 0;
    x = 0;
    while(str[x])
    {
        while(str3[j])
        {
            if(str[x] == str3[j])
            {
                 w++;
                 if(w == 2)
                    i++;
            }
            j++;
        }
        w = 0;
        j = 0;
        x++;
    }
    count = strlen(str3);
    tab = count - w;
    i = i/2;
    tab = tab - i;
	if(tab % 2 == 0)
		printf("CHAT WITH HER!");
    else
		printf("IGNORE HIM!");
}*/



/*int main(void)
{
    //A. George and Accommodation
    int nbrofroom;
    int nbrofppl;
    int nbrroomcpc;
    int total = 0;
    int x = 0;
    int y = 0;
    scanf("%d",&nbrofroom);
    while(nbrofroom--)
    {
        scanf("%d %d", &nbrofppl,&nbrroomcpc);
        if (nbrofppl >= nbrroomcpc)
            x++;
        if (nbrofppl + 1 < nbrroomcpc)        
            y++;
    }
    
    if (y)
        printf("%d",y);
    else
        printf("0");
}






static long int		ft_neg(long int nbr)
{
	if (nbr < 0)
	{
		return (-nbr);
	}
	return (nbr);
}

static int			ft_len(long int nbr)
{
	int		len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	sign = (n < 0) ? -1 : 1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_neg(n % 10);
		n = ft_neg(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}


int main(void)
{
    int nbr;
    int calc;
    char str[100000];
    int i;
    scanf("%d,%d",&nbr,&calc);
    while(calc-- >= 0)
    {
        str[i++] = *ft_itoa(nbr);
        printf("t %c\n",str[i]);
        
        if (str[i] != '0')
        {
            printf("ff");
            nbr -=1;
        }  
        if (str[i] == '0')
            nbr = nbr / 10;
    }
    printf("%d",nbr);
}



int main(void)
{
    //anton and danik
    char str[100000];
    long nbr[100000];
    long int i = 0;
    long int j1 = 0;
    long int j2 = 0;
    scanf("%li",nbr);
    scanf("%s",str);
    while(str[i])
    {
        if (str[i] == 'A')
            j1++;
        else if (str[i] == 'D')
            j2++;
        i++;
    }
    if(j1 > j2)
        printf("Anton");
    else if (j2 > j1)
        printf("Danik");
    else if (j1 == j2)
        printf("Friendship");
}*/





/*
int main(void)
{
    //translation
    char str[100];
    char str2[100];
    int count = 0;
    int total  = 0;
    int ps = 0;
    int i = 0;
    int j = 0;
    scanf("%s",str);
    scanf("%s",str2);
    while(str2[j])
    {
        j++;
        total++;
    }
    while(j-- > 0)
    {
        if (str2[j] == str[i++])
            count++;
        else
            ps++;
    }
    if(count == total)
        printf("YES");
    else if(count != total)
        printf("NO");
}
*/



/*int main(void)
{
    char s[100];
    char s2[100];
    int i,x = 0;
    scanf("%s", s);
    while(s[i])
    {
       i++;
    }
   // printf("%i",i);
    while(i > 0)
    {
        s2[x] = s[i];
        x++;
        i--;
    }
    //printf("%s",s2);
}*/







/*int main(void)
{
    char nbr[10^18];
    int i,count,min,res = 0;
    scanf("%s", nbr);
    while(nbr[i])
    {
        if (nbr[i] == '4' || nbr[i] == '7')
            count++;
        if (nbr[i] != '4' && nbr[i] != '7')
            min++;
        i++;
    }
    res = count;
    if (res == 4 || res == 7)
    {
        printf("YES");
    
    }
    else
        printf("NO");
}
*/

/*int main(void)
{
    char s[100];
    int i,maj,min = 0;
    scanf("%s", s);
    while (s[i])
    {
        if (s[i] == tolower(s[i]))
            min++;
        if (s[i] == toupper(s[i]))
            maj++;
        i++;
    }
    i = 0;
    while (s[i])
    {
        if (min > maj)
            s[i] = tolower(s[i]);
        if (maj > min)
            s[i] = toupper(s[i]);
        if (maj == min)
            s[i] = tolower(s[i]);
        i++;
    }
    printf("%s",s);
}*/


/*int main(void)
{
    int k,n,w,num,res,tmp,nbr = 0;
    int i = 1;
    scanf("%i%i%i",&k,&n,&w);
    //res = k * n--;
    while(i <= w)
    {
        //res = num + num;
        //nbr = num + res;
        i++;
        printf("\n%i\n",res);
    }
        num = i * k;
    printf("L%i",num);
}*/




/*int main (void)
{
    char s1[100];
    char s2[100];
    int i = 0;
    scanf("%s", s1);
    scanf("%s", s2);
    while ((s1[i] != '\0' && s2[i] != '\0') && (tolower(s1[i]) == tolower(s2[i])))
        i++;
    if (tolower(s1[i]) < tolower(s2[i]))
        printf("-1");
    else if (tolower(s1[i]) > tolower(s2[i]))
        printf("1");
    else
        printf("0");
}
*/


/*int main(void)
{
    int n;
    int i;
    int x;
    char s[5];
    i = 0;
    x = 0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",s);
        if (s[1] == '+')
            x++;
        else
            x--;
    }
    printf("%d", x);
}
*/







/*
int main(void)
{
   char str[1000];
   int i;
   i = 0;
   scanf("%s", str);
   str[0] = toupper(str[0]);
   printf("%s", str);
}*/


/*int main (void)
{
    int n;
    char s1[100];
    char s2[100];
    int i = 0;
    int j = 0;
    int result;
    scanf("%s",s1);
    scanf("%s",s2);
    while (s1[i] != '\0' && s2[j] != '\0')
    {
        if(tolower(s1[i]) < tolower(s2[j]))
           result = -1;
        else if(tolower(s1[i]) > tolower(s2[i]))
            result = 1;
        else
            result = 0;
        
        i++;
        j++;
    } 
    printf("%d", result);
}*/