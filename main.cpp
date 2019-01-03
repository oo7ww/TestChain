#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();
/*    for(int i = 0 ; i < 2; ++i){
        cout << "Mining block..." << i+1 << endl;
        bChain.AddBlock(Block(i, "Mining data"));
    }
*/
    cout << "Mining Block 1..."<<endl;
    bChain.AddBlock(Block(1, "Mining 1"));

    cout << "Mining Block 2..."<<endl;
    bChain.AddBlock(Block(2, "Mining 2"));

    cout << "Mining Block 3..."<<endl;
    bChain.AddBlock(Block(3, "Mining 3"));

    return 0;
}