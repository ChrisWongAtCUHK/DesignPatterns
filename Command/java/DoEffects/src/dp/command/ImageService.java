package dp.command;

import java.util.*;

public class ImageService{
	private Map<String, Command> commands = new HashMap<String, Command>();
	private Drawing drawing = new DrawingImpl();
	void addCommand(String effect, Command command){
		commands.put(effect, command);
	}
	void doEffect(String effect){
		commands.get(effect).execute(drawing);
	}
}
