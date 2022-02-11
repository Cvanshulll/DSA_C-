bool valid(char s)
{
    if((  s>='a' && s<='z' ) || ( s>='A' && s<='Z') || (  s>='0' && s<='9' ) )
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

char toLowerCase(char s)
{
    if((  s>='a' && s<='z' ) || (  s>='0' && s<='9' ))
    {
        return s;
    }
    else
    {
        char temp  = s -'A'+'a';
        return temp;
    }
}

bool palindrome(string s)
{
    int st=0; 
    int  e = s.size()-1;
    while(st<=e)
    {
        if(s[st] !=s[e])
        {
            return 0;
        }
        else 
        {
            st++;e--;
        }
    }
    return 1;
}

bool checkPalindrome(string s)
{
    // rem0ve extra characters 
    string temp = "";
    
    for(int j =0; j<s.size(); j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    
    // convert all characters to lowerCase 
    
    for(int j =0; j<temp.size(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
                             
     // check palindrome 
      return palindrome(temp);
   
}
