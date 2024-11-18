#include<iostream>
#include<vector>

int main(){
	std::vector<int> code = {2,4,9,3};
	int k = -2;

	std::vector<int> sol;
        int temp = 0;
        int code_size = code.size();
        for(int i = 0;i<code_size;i++){
            temp = 0;
            if(k == 0){
                sol.push_back(temp);
            }
            else if(k > 0){
		    int j = i;
		    int x = 0;
		    while(x != k){
			    j = (j+1)%code_size;
			    std::cout << j<< " ";
			    temp += code[j];
			    x++;
		    }
		    std::cout << "\n";
                sol.push_back(temp);
            }
            else if(k < 0){
		int j = i;
		    int x = 0;
		    while(x != k){
			    j = (j-1+code_size)%code_size;
			    std::cout << j<< " ";
			    temp += code[j];
			    x--;
		    }
		    std::cout << "\n";
                sol.push_back(temp);
            }
        }
        
	for(int i = 0;i<code_size;i++){
		std::cout << sol[i] << " ";
	}

	return 0;
}
