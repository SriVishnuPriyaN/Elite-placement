class Solution {
    public String longestCommonPrefix(String[] strs) {
       StringBuilder str1 = new StringBuilder();
       for(int i=0;i<strs[0].length();i++){
        char ch = strs[0].charAt(i);
        for(int j=1;j<strs.length;j++){
            if(i>=strs[j].length() || strs[j].charAt(i)!=ch) 
                return str1.toString();
        }
        str1.append(ch);
       }
       return str1.toString();
    }
}