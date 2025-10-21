class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        ArrayList<Integer> arr = new ArrayList<>();
        int i=0;
        for(String str : words){
            if(str.contains(String.valueOf(x))) arr.add(i);
            i++;
        }
        return arr;
    }
}