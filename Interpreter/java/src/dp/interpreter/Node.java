package dp.interpreter;

public interface Node { 
    void parse(Context context); 
    void execute();
}