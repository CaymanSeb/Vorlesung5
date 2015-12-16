#include <iostream>
#include "NoteSorter.h"
#include "Note.h"

void NoteSorter::sortNotes(Note *noteArray, int array_length) {

		for (int n = array_length; n>1; n = n - 1) {
			for (int i = 0; i<n - 1; i = i + 1) {
				if (noteArray[i] > noteArray[i + 1]) {
					Note swap = noteArray[i];
					noteArray[i] = noteArray[i+1];
					noteArray[i + 1] = swap;
				} 
			} 
		} 
	
	/*
	* In dieser Methode sollt ihr den Bubblesort-Algorithmus implementieren!
	* Ein Vergleich kann in der Art noteArray[i] > noteArray[i+1] stattfinden !
	*/

}

