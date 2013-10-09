package dp.builder;

// Director
public class MazeDirector {
	private MazeEnum[][] maze;
	private MazeBuilder builder;
	
	// Constructor
	public MazeDirector(MazeEnum [][] maze, MazeBuilder builder){
		this.maze = maze;
		this.builder = builder;
	}
	
	public Maze build(){
		for(int i = 0; i < maze.length; i++){
			for(int j = 0;  j < maze[i].length; j++){
				switch(maze[i][j]){
					case ROAD:
						this.builder.buildRoad(i, j);
						break;
					case WALL:
						this.builder.buildWall(i, j);
						break;
					case TREASURE:
						this.builder.buildTreasure(i, j);
						break;
					default:
						break;
				}
			}
		}
		return this.builder.getMaze();
	}
}