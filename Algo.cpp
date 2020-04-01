
//For this assignment help taken from internet . there could be bugs in code



//Boyer More Algorithim

void Heuristicch( char * str, int s, int badchar[N])  
{  
    int l=0;  
 
    while(l<N)
	{
		badchar[l]=-1;
	}
  
    while(l<N)
	{                           //actual value of last occurrence 
		badchar[int(str[i])]=l;
	} 
}  
  
void Boyerspoore( string text, string patterntern)  
{  

    int sp = patterntern.size(); 
	
    int st = text.size();  
  
  
  int badchar[N];  
 
 
   Heuristicch(patterntern, sp, badchar);  
  
    int shift = 0; //this is for shift
               
    while(shift <= (st - sp))  
    {  
        int k = sp - 1;  
      
        while(k >= 0 && patterntern[k] == text[shift + k])  
            //align next char with last occurrence of it in patternterntern--;  
  
       
        if (k < 0)  
        {  
            //align next char with last occurrence of it in patternterntern
            shift =shift+ (shift + sp < st)? sp-badchar[text[shift + sp]] : 1;  
  
        }  
  
        else
            shift =shift+k - badchar[text[shift + k]]);  //align bad char with last occurrence of it in patternterntern
    }  
}  


//Prefix 
int [] Prefix(char* pattern, int M) 
{ 
    int l = 0; 
    Prefixarray[0] = 0; // value will be stored in array of prefix
 
    int i = 1; 
	
    while (i < M)
		{ 
        if (pattern[i] == pattern[l])
		    l++; Prefixarray[i] = l; i++;
        else  
            if (l != 0) 
                l = Prefixarray[l - 1];
            else { 
                Prefixarray[i] = 0; 
			i++; }
            
        } 
    } 
} 
 














 