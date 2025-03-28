# 플러그인 생성

플러그인을 직접 만들어보고, 블루프린트 함수로 호출이 가능까지 구현된 프로젝트.

**C++ 코드**
- MyIDPluginBPLibrary : SetUserName, GetUserName 코드가 들어가있으며 블루프린트로 호출이 가능하게 설정.

**블루프린트**
- TestGameMode : 생성한 플러그인 함수를 블루프린트로 호출하여 설정해 둔 간단한 블루프린트.

**플러그인 패키지**
- MyIDPlugin : 플러그인을 패키지한 파일
