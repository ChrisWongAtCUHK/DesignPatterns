package dp.adapter.execute;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class ExecuteAdapter implements ExecuteInterface {

	private Object object;
	private String methodname;
	
	public ExecuteAdapter(Object object, String methodname){
		this.object = object;
		this.methodname = methodname;
	}
	
	@Override
	public void execute(){
		// 4. The adapter/wrapper "maps" the new to the legacy implementation
		try {
			Class<?> c = this.object.getClass();
			
			// Cast the non-specific object to specific object
			Object obj = c.cast(object);
			
			// Create method with method name and parameters, for simply demonsttration, no parameters is used
			Method method = c.getMethod(this.methodname);
			method.invoke(obj);
			
		} catch (SecurityException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (NoSuchMethodException e) {
			// // For getMethod
			e.printStackTrace();
		} catch (IllegalArgumentException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			// For invoke method
			e.printStackTrace();
		} catch (InvocationTargetException e) {
			// For invoke method
			e.printStackTrace();
		}
	}
}