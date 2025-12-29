#include <iostream>
#include<vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    int sum;

    for(int i = 0; i < nums.size(); i++){
    	for(int j = i+1; j < nums.size(); j++){
    		if(nums[i]+nums[j]==target){
                return {i,j};
            }
    	}
    }

    return {};
}

//nums = [2,7,11,15], alvo = 9

int main(){
	vector<int> nums = {2, 5, 5, 15};
	int target = 10;

	vector<int> resultado = twoSum(nums,target);

    cout << resultado[0] << " " << resultado[1] << endl;

    return 0;
}