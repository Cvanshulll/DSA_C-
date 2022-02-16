//                         https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?leftPanelTab=1                               //


string replaceSpaces(string &str){
	// Write your code here.
//     string t = "";
    for(int i =0; i<str.size(); i++)
    {
        if(str[i]==' ')
        { 
            str= str.substr(0,i)+"@40"+str.substr(i+1,str.length());
        } 
        // try replace() function too
}
//             t.push_back('@');
//              t.push_back('4');
//              t.push_back('0');
//         }
//         else 
//         {
// //              t.push_back(str[i]);
//         }
//     }
    return str;
}
