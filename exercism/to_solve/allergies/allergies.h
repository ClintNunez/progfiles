#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include<string>
#include<set>

// retun a map of string and boolean
namespace allergies {
    std::map<bool,int> allergyTest(int allergyScore) {
        //std::set<std::string, int> allergySet = {}
        int allergyList[] = {1,2,4,8,16,32,64,128};

        // use bubble sort
        int low = 0, high = (sizeof(allergyList)/sizeof(int)) - 1, middle;
        while(low <= high) {
            middle = (low + high) / 2;
            if(allergyList[middle] == allergyScore) {
                // set allergy to true
            } else if(allergyList[middle] > allergyScore) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        

        return "";
    }
}

#endif
