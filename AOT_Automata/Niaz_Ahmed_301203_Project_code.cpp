 
// NAME : NIAZ AHMED  
// CMS ID : 301203 
// THEORY OF AUTOMATA PROJECT




//Liberaries
#include <iostream>
#include <string>
using namespace std;
  
 


// Global variables
int hold= 0;
bool Result = false;



//Function that use to determine wheather string accept by regular expression or not
void OutputFunc(string b, string a)
{
    
  int j = 0;
  int leftOver = 0;
  
  // Check for character A
  while(j != a.length())
  {
      
      
      if(hold-1 == b.length()-1)
      {
         break;
      }
      
      char toCheck = a[j];
      char backCharacter = a[j+1];
      
      if (a[j+1] == '*')
      {
         if (toCheck == 'a' || toCheck == 'A' || toCheck =='e')
         {
            while(b[hold] == 'A' || b[hold] == 'a')
            {
               hold++;
            }
         }

         // Check for character B
         if (toCheck == 'b' || toCheck == 'B' || toCheck == 'e')
         {
            while(b[hold] == 'B' || b[hold] == 'b')
            {
               hold++;
            }
         }
         j+=2;
      }
      
      
      else if(a[j] == '(')
      {
      
         backCharacter = a[j+2];
         if (backCharacter == '|')
         {
      
            backCharacter = a[j+5];
            if(backCharacter == '*')
            {
               while(b[hold] == 'A' || b[hold] == 'B' || b[hold] == 'a' || b[hold] == 'b' || b[hold] == 'e')
               {
                  hold++;
               }
            }
      
            else{
               if(b[hold] == 'A' || b[hold] == 'B' || b[hold] == 'a' || b[hold] == 'b')
               {
                  hold++;
               }
            }
      
            int count = 0;
      
            for(int i = 0; i<a.length();i++)
            {
      
               if(a[i] != '*' && a[i] != '(' && a[i] != '|')
               {
                  count++;
               }
      
               else
               {
                  count--;
               }
            }
            hold = hold-count;
            j+=6;
         }
      }
      
      else if(hold-1 == b.length()-1)
      {
         break;
      }
      
      else if((a[j+1] != '*' && (b[hold] == a[j])))
      {
         hold++;
         j+=1;
      }
      
      else if(a[j] != '*' && j == a.length()-1 && b[hold] == a[j])
      {
         hold++;
         j++;
      }
      
      else{
            j++;
      }
  }
   
   if(b[hold] == '\0' && (j-1 == a.length()-1))
   {
    Result = true;
   }
   
   else
   {
     Result = false;
   } 
}


// Main function
int main()
{
    
    
    
  cout<<"------------- REGUALR EXPRESSION -----------\n\n"<<endl;    
  
  
  //take regualr expression and string as input
  string Reg;
  cout<<"Enter any Regualar Expression : ";
  cin>>Reg;
  
  
  //it take 6 string as input to check the regular expression
  string S1,S2,S3,S4,S5,S6;
  
  cout<<"\nEnter any String 1 : ";
  cin>>S1;
  
  cout<<"Enter any String 2 : ";
  cin>>S2;
  
  
  cout<<"Enter any String 3 : ";
  cin>>S3;
  
  
  cout<<"Enter any String 4 : ";
  cin>>S4;
  
  cout<<"Enter any String 5 : ";
  cin>>S5;
  
  cout<<"Enter any String 6 : ";
  cin>>S6;
  
 
  cout<<"--------------------------------------\n"<<endl;
  
  
  
 //Display the output 
  
  cout<<"---------------- RESULTS --------------\n\n"<<endl;
  
  cout<<"Regular Expression accept string "<<S1;
  OutputFunc(S1,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  cout<<"Regular Expression accept string "<<S2;
  OutputFunc(S2,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  cout<<"Regular Expression accept string "<<S3;
  OutputFunc(S3,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  
  cout<<"Regular Expression accept string "<<S4;
  OutputFunc(S4,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  cout<<"Regular Expression accept string "<<S5;
  OutputFunc(S5,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  cout<<"Regular Expression accept string "<<S6;
  OutputFunc(S6,Reg);
  Result == true ? cout<<" ? YES"<<endl : cout<<" ? NO"<<endl;
  hold = 0;
  
  
  
  return 0;
}
