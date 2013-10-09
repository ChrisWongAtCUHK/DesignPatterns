package dp.builder;

// Builder
public interface MazeBuilder{
	public void buildRoad(int i, int j);				// buildPart() 1
	public void buildWall(int i, int j);				// buildPart() 2
	public void buildTreasure(int i, int j);			// buildPart() 3
	
	public Maze getMaze();
}