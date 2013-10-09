package dp.builder;

public class Main{
	public static void main(String[] args){
		final MazeEnum[][] material ={
			 {MazeEnum.WALL,		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.ROAD, 		MazeEnum.ROAD, 		MazeEnum.ROAD, 		MazeEnum.ROAD, 		MazeEnum.TREASURE, 	MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.ROAD, 		MazeEnum.WALL, 		MazeEnum.ROAD, 		MazeEnum.WALL, 		MazeEnum.ROAD, 		MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.ROAD, 		MazeEnum.TREASURE, 	MazeEnum.WALL, 		MazeEnum.ROAD, 		MazeEnum.WALL, 		MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.WALL, 		MazeEnum.ROAD, 		MazeEnum.WALL, 		MazeEnum.ROAD, 		MazeEnum.WALL, 		MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.ROAD, 		MazeEnum.ROAD, 		MazeEnum.TREASURE, 	MazeEnum.ROAD, 		MazeEnum.ROAD, 		MazeEnum.WALL}, 
		     {MazeEnum.WALL,		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL,		MazeEnum.WALL, 		MazeEnum.WALL, 		MazeEnum.WALL}
		};
		
		MazeDirector director = new MazeDirector(material, 
                new CUHKBuilder(material.length, material[0].length));
        director.build().paint();
		System.out.println("Done.");
	}
}