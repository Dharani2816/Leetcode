class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        ArrayList<Integer> arr = new ArrayList<>();
        String val = String.valueOf(x);
        int i=0;
        for(String str : words){
            if(str.contains(val)) arr.add(i);
            i++;
        }
        return arr;
    }
}