About programs:

transliteration_english_to_hindi.cpp: 
Input english word in main() and hindi words are generated in english_hindi_output.txt

transliteration_hindi_to_english.cpp:
Input hindi word in hindi_complete.txt and output english words are generated in english_complete_output.txt. Since multiple english words can be output for same hindi word a new hindi file hindi_complete_output.txt is generated having corresponding hindi words for each english word.

 trie_serialization.cpp:
Input is taken from english_complete_output.txt and hindi_complete_output.txt. The serialized output is generated in serialized_complete_output.txt.

trie_deserialization.cpp:
Input is taken from serialized_complete_output.txt.

separate_hindi.cpp:
It takes input from out.txt and filters out english words and genrates output in refined_crawled.txt

dup_remove.cpp:
It removes duplicate string from input file. Input is given in refined_crawled.txt and is in sorted order. Output is generated in final_crawled.txt

webcrawling.py:
It crawls http://dict.hinkhoj.com and extracts unrefined hindi words from the site. Input is from the given url and output is generated in out.txt

mymap_english_to_hindi.h:
It contains the mapping for english to hindi characters.

mymap_hindi_to_english.h:
It contains the mapping for hindi to english characters.


