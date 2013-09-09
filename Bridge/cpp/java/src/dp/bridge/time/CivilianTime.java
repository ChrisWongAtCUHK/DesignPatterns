package dp.bridge.time;

public class CivilianTime extends Time {

	
	public CivilianTime(int hr, int min, int pm){
		super(hr, min);
		this.imp = new CivilianTimeImp(hr, min, pm);
	}

}