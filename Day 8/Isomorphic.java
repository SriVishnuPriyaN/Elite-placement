class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] count_s1 = new int[s.length()];
        int[] count_s2 = new int[t.length()];
        int count=1;
        int[] seeS = new int [256];
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
            if(seeS[c]==0) seeS[c]=i+1;
            count_s1[i]=seeS[c];
        }
        int[] seeT = new int [256];
        for(int i=0;i<t.length();i++){
            char c = t.charAt(i);
            if(seeT[c]==0) seeT[c]=i+1;
            count_s2[i]=seeT[c];
        }
        for(int i=0;i<s.length();i++){
            if(count_s1[i]!=count_s2[i]) return false;
        }
        return true;
    }
}