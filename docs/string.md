1. #### 아래 코드는 아래 두 경우에 작동하지 않음 

   ```c++
   	char line[256];
   	std::cin.getline(line, 256);
   ```

   > 1. 아무것도 읽지 못했을 때
   > 2. 한 줄에 문자가 255자를 초과할 때

2. #### std::string 클래스

   1. 문자열은 길이가 증가할 수 있음

      ```c++
      #include <string>
      std::string firstName;
      std::cin >> firstName;
      ```

   2. 대입과 덧붙이기

      ```c++
      string firstName = "KIM";
      string fullName = "AM NAE";
      
      // 대입
      fullName = firstName;
      
      // 덧붙이기
      fullName += " KIM"
      ```

   3. 문자열 합치기

      ```c++
      string firstName = "JONG";
      string lastNAME = "LEE";
      string fullName = firstName + " " + lastName;
      ```

   4. 비교 (>, <, <=, >=, ==, !=)

      ```c++
      if (name1 == name2) {
      
      }
      
      // 사전 상의 순서를 비교
      if (name1 > name2) {
      
      }
      ```

      

