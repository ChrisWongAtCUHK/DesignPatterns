package dp.adapter.execute;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class ExecuteAdapter implements ExecuteInterface {

	private String classname;
	private String methodname;
	
	public ExecuteAdapter(String classname, String methodname){
		this.classname = classname;
		this.methodname = methodname;
	}
	
	@Override
	public void execute(){
		// 4. The adapter/wrapper "maps" the new to the legacy implementation
		try {
			Class<?> c = Class.forName(this.classname);
			Constructor constructor = c.getConstructor();
			
			// Cast the non-specific object to specific object
			Object obj = constructor.newInstance();
			
			// Create method with method name and parameters, for simply demonsttration, no parameters is used
			Method method = c.getMethod(this.methodname);
			method.invoke(obj);
			
		} catch (ClassNotFoundException e) {
			// For constructor.newInstance
			e.printStackTrace();
		} catch(InstantiationException e){
			// For Class.forName
			e.printStackTrace();
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