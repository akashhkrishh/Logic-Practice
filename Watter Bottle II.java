//Leetcode 3001
class Solution {
    public int maxBottlesDrunk(int nE, int nEx) {
        int nD;
        for(nD=nE;nE>=nEx;nE-=nEx++,nD++,nE++);
        return nD;
    }
}
