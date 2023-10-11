
/**
 * Predio muito loco.
 *
 * @author (Eu)
 * @version (1.0)
 */
public class Predio{
    
    private Square andar1;
    private Square andar2;
    private Square andar3;
    private Square janela1;
    private Square janela2;
    private Square janela3;
    private Triangle telhado;
    private Circle sol;
    
    
    /**
     * Partes do predio
     */
    public Predio(){
        
        andar1 = new Square();
        andar2 = new Square();
        andar3 = new Square();
        janela1 = new Square();
        janela2 = new Square();
        janela3 = new Square();
        telhado = new Triangle();
        sol = new Circle();
    }

    /**
     * Mostra o andar 1
     */
    public void mostarAndar1(){
        andar1.makeVisible();
        andar1.changeSize(50);
        andar1.moveHorizontal(0);
        andar1.moveVertical(200);
        andar1.changeColor("black");
        
    }
    /**
     * Mostra o andar 2
     */    
    public void mostarAndar2(){
        andar2.makeVisible();
        andar2.changeSize(50);
        andar2.moveHorizontal(0);
        andar2.moveVertical(150);
        andar2.changeColor("black");
        
    }
    
    /**
     * Mostra o andar 3
     */    
    public void mostarAndar3(){
        andar3.makeVisible();
        andar3.changeSize(50);
        andar3.moveHorizontal(0);
        andar3.moveVertical(100);
        andar3.changeColor("black");
        
    }
    
     /**
     * Mostra o telhado
     */    
    public void mostarTelhado(){
        telhado.makeVisible();
        telhado.changeSize(50,50);
        telhado.moveHorizontal(35);
        telhado.moveVertical(85);
        telhado.changeColor("black");
        
    }
    
    /**
     * Mostra o janela 1
     */    
    public void mostarJanela1(){
        janela1.makeVisible();
        janela1.changeSize(20);
        janela1.moveHorizontal(10);
        janela1.moveVertical(210);
        janela1.changeColor("red");
        
    }
    
    /**
     * Mostra o janela 2
     */    
    public void mostarJanela2(){
        janela2.makeVisible();
        janela2.changeSize(20);
        janela2.moveHorizontal(10);
        janela2.moveVertical(160);
        janela2.changeColor("blue");
        
    }
    
    /**
     * Mostra o janela 3
     */    
    public void mostarJanela3(){
        janela3.makeVisible();
        janela3.changeSize(20);
        janela3.moveHorizontal(10);
        janela3.moveVertical(110);
        janela3.changeColor("green");
        
    }
    
    /**
     * Mostra o Sol
     */    
    public void mostarSol(){
        sol.makeVisible();
        sol.changeSize(50);
        sol.moveHorizontal(200);
        sol.moveVertical(-20);
        sol.changeColor("yellow");
        
    }
}
