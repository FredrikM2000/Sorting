#include <iostream>
#include <array>
#include <chrono>
#include <algorithm>
#include <functional>
#include <cmath>

void selection_sort(std::array<int, 10>& a) // husk referanse
{
	auto n = a.size();
	for(auto i = 0; i < n - 1; i++)
		for(auto j = i + 1; j < n; j++)
		if(a[i] > a[j])
		std::swap(a[i], a[j]);
}

// Tid taking med chrono
void sort_tid_0(std::array<int, 10>& a) //kun tidtakings=kode
{
	std::chrono::nanoseconds total_tid{ 0 };

	//tilordne random verdier
	auto start=std::chrono::high_resolution_clock::now();

	//plassholder for sorteringsfunksjon
	/*for(auto i = 0; i < ul; i++)
		double x = 3.14 * 2.51;*/

	//selection_sort(a);
	std::sort(a.begin(), a.end());

	auto slutt = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double>varighet= slutt - start;
	std::chrono::nanoseconds varighet_nano =
		std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
	total_tid += varighet_nano;

	//utskrift
	std::cout << total_tid.count() << std::endl;
}


int main()
{
	std::array<int, 10> tall;
	//std::array<int, 100> hundre;
	//std::array<int, 1000> tusen;
	//std::array<int, 10000> titusen;

	//Legge inn tilfeldige verdier
	for (int i = 0; i < tall.size(); i++) {
		tall[i] = std::rand() % tall.size();
		//std::cout << tall[i];
	}

	//std::cout << "\n";

	//Sorter verdiene
	//selection_sort(ti);
	//std::sort(tall.begin(), tall.end());

	//Skrive ut verdiene
	/*for (int i = 0; i < tall.size(); i++) 
	std::cout << tall[i];*/

	//std::cout << "\n";

	sort_tid_0(tall);


	//Lag array| array size m
	//Sett inn verdier
	//Start tid
	//Sortere
	//Slutt tid
	//Print tid


}
