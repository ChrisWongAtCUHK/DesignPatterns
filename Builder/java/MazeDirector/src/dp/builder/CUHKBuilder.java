package dp.builder;

// Builder
public class CUHKBuilder implements MazeBuilder {
	private char[][] maze;
	
	// Constructor
	public CUHKBuilder(int i, int j){
		this.maze = new char[i][j];
	}
	
	@Override
	public void buildRoad(int i, int j){				// buildPart() 1
		maze[i][j] = ' ';
	}
	
	@Override
	public void buildWall(int i, int j){				// buildPart() 2
		maze[i][j] = '~';								//  "\u25a1"
	}
	
	@Override
	public void buildTreasure(int i, int j){			// buildPart() 3
		maze[i][j] = '*';								// "\u2605"
	}
	
	@Override
	public Maze getMaze(){
		return new Maze(){
			@Override
			public void paint(){
				for(char[] row: maze){
					for(char ele: row){
						System.out.print(ele);
					}
					System.out.println();
				}
			}
		};
	}
}