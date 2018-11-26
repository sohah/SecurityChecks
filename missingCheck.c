#include <stdio.h>
#include <string.h>

int getAccount(int* accounts, int customerIndex, int accountSize) {
        if((customerIndex >= 0) && (customerIndex < accountSize))
                return accounts[customerIndex];
 }

 int getAccountMissing(int* accounts, int customerIndex, int accountSize) {
      return accounts[customerIndex];
  }

int main(){
        int accounts[5] = {1111,2222,3333,4444,5555};
        int customerIdx = 6;
        int size = 10;
        int accountNumber = getAccount(accounts, customerIdx, size);
        printf("The account number is:%d\n",accountNumber);

        return 0;
}
