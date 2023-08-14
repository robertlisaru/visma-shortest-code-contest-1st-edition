#include <fstream>
int i,j,n=-7;
int main(){
    for(std::ofstream f("totem.txt"); ~n; )
		for(i=7, f<<7+n++<<"\n"; i-- +6; f<<"\n")
			for(j=7; j-- +6; f<<( (i*i+j*j>n*n ? i*j : abs(i)+abs(j)+n) ?'.':'*' ));
}
