class Solution {
public:
    string sortVowels(string s) {
        string a;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||
   s[i]=='o'||s[i]=='u'||s[i]=='A'||
   s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
               
            a+=s[i];
        }
        sort(a.begin(),a.end());
             for(int i=0;i<s.size();i++)
        {
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||
   s[i]=='o'||s[i]=='u'||s[i]=='A'||
   s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
               s[i]=a[k++];
        }
        return s;
    }
};