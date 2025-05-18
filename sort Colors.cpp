class Solution {
public:
    void sortColors(vector<int>& v) {
    
int frec[3]={0};
for(auto it:v){
frec[it]++;
}
int x=0;
   for(int i=0;i<frec[0];i++ ){
    v[x]=0;
x++;
   }
   for(int i=0;i<frec[1];i++ ){
    v[x]=1;
    x++;
   }
   for(int i=0;i<frec[2];i++ ){
    v[x]=2;
    x++;
   }
   
   
   }
};
