class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        String s1=s.replaceAll("[^a-zA-Z0-9]", "");
        StringBuilder sb = new StringBuilder(s1);
        String s2=sb.toString();
        if(s2.equals(sb.reverse().toString())) return true;
        return false;
    }
}