# String-Corrector

- Write a program that fixes the mistakes within the given strings of input paragraphs. Firstly, the program will take an input string from the user. Your string can be of any size but there should be at least hundred characters available. The program will check three rules that are given to you below and apply them over the input string that the user enters. These rules will be checked by the functions your program holds in order. Therefore they will be applied over the input(s) in order as rule 1 and rule 2. The information for the rules are given below.
## Rule 1 : There must not be any duplicate letters for the inputs that the user enter. If a duplicate letter or space character is detected, all of the extra letters should be deleted until only one of the letters remain. This condition of being ‘duplicate’ and/or ‘multiple’ is constrained by some rules. The rule is applied over only consecutive character forms that are right next to each other.
- Example
Base Version: I wass waalkinng in thhee Ankarraa.
Fixed Version: I was walking in the Ankara.
You are expected to apply this rule inside a function. Function will have a void return type and will accept the input string from the main as parameter. Your function will be called from the main, fix the string and update it to it’s correct form by regarding to this rule.
## Rule 2 : Eliminate unnecessary space characters, add space characters if you need to. The spacing structure rule for the given paragraphs is given as;
- 1- Punctuation marks must not have any space between them and the word before them (the word they belong to). Any punctuation must be the first character to come right after a word is finished.
- 2- After every word with or punctuation mark, there must always be a single space character before the next word starts. (There is no need to apply this at the end of the input string). This means, if there are no space between a punctuation and the next word’s first character, you must add a space character between the punctuation and the beginning of the next word.
- After applying rule 2, you will call the rule 2’s function from the main and perform the space elimination, addition over the string or just stay neutral since there might be no need for fixing spaces after the appliance of rule 1 over certain strings. The function should apply the rules given.
- Sample Paragraphs:
 Paragraph 1: Ppeaace is the resullt of retrraining yYyyour miiind to proccess liife as it is ,ratheer than as you think it shhould be .
 Paragraph 2: ssSpaccce TttrRavel is life - enhancing,, AaaAnd anything that' s life - enhanncing is woOorth doinnng….
- Expected Output:
 Fixed Paragraph 1: Peace is the result of retraining your mind to proces life as it is, rather than as you think it should be.
 Fixed Paragraph 2: space Travel is life- enhancing, and anything that's life- enhancing is worth doing.
After the program ends, you will output the final version of the string. In between the appliance of these rules, you will print the result of the applied rules as output. Sample runs and important remarks are given in the documentation further below.

