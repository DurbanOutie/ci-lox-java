rm src/lox/Expr.java
javac src/tool/*.java -d ./out/bin
java -cp out/bin tool.GenerateAst src/lox/

cat src/lox/Expr.java


javac src/lox/*.java -d ./out/bin
