<img align=center width=200px src="https://upload.wikimedia.org/wikipedia/commons/7/77/Visma_logo.png"/>
<img align=center width=200px src="https://www.ulbsibiu.ro/wp-content/uploads/prezentare/LOGO-ULBS_orizontal.png"/>


## visma-shortest-code-contest-1st-edition (April 2016)
Solve the C++ challenge using the shortest amount of code (what is known as [codegolf](https://en.wikipedia.org/wiki/Code_golf)).

### The challenge
Write a C++ program that generates this text file: [totem.txt](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/blob/main/totem.txt)

### My 175 characters [solution](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/blob/main/source.cpp)
which got me 3rd place 🥉
```cpp
#include <fstream>
int i,j,n=-7;
int main(){
    for(std::ofstream f("totem.txt"); ~n; )
		for(i=7, f<<7+n++<<"\n"; i-- +6; f<<"\n")
			for(j=7; j-- +6; f<<( (i*i+j*j>n*n ? i*j : abs(i)+abs(j)+n) ?'.':'*' ));
}
```

🍻 Big credit to my very good friend and roommate at that time, Marius, who helped reduce my file size from 188 down to 175. Advancing the solution from 11th place up to 3rd place. And he didn't even want me to split the prize with him at the end. What a good pal 🥲.

### Silly notes and sketches during problem solving
![3](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/assets/40792547/d63f7c2b-7762-44c8-9a45-7aa15a48448f)
![2](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/assets/40792547/9d41fa66-2ccf-4f35-a848-1c8608e11d70)
![1](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/assets/40792547/bc521a52-6674-4cc6-a276-1cd2a8108cb1)
![4](https://github.com/robertlisaru/visma-shortest-code-contest-1st-edition/assets/40792547/8d7b09c2-c194-4cca-b3b6-29f1c3da3b5a)
