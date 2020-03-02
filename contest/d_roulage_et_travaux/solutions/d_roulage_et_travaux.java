import java.util.*;

public class d_roulage_et_travaux {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int h = sc.nextInt();
        int p = sc.nextInt();

        Set<Integer> hangars = new HashSet<>();
        Set<Integer> slopes = new HashSet<>();
        for(int i=0;i<h;++i){
            hangars.add(sc.nextInt()-1);
        }
        for(int i=0;i<p;++i){
            slopes.add(sc.nextInt()-1);
        }

        List<Set<Integer>> graph = new ArrayList<>();
        for(int i=0;i<n;++i){
            graph.add(new HashSet<>());
        }
        int R = sc.nextInt();
        int a,b;
        for(int i=0;i<R;++i){
            a = sc.nextInt()-1;
            b = sc.nextInt()-1;
            graph.get(a).add(b);
            graph.get(b).add(a);
        }

        Map<Integer,Set<Integer>> connect_hangar = new HashMap<>();
        Map<Integer,Set<Integer>> connect_slopes = new HashMap<>();

        boolean seen[] = new boolean[n];
        int index_cc = -1;
        int current;
        LinkedList<Integer> d = new LinkedList<>();
        for(int index = 0; index < n;++index){
            if(!slopes.contains(index) && !hangars.contains(index) && !seen[index]){
                index_cc += 1;
                d.clear();
                d.addFirst(index);
                seen[index] = true;
                while(!d.isEmpty()){
                    current = d.pollFirst();
                    for(int neigh : graph.get(current)){
                        if(!seen[neigh]){
                            if(hangars.contains(neigh)){
                                if(!connect_hangar.containsKey(neigh)){
                                    connect_hangar.put(neigh,new HashSet<>());
                                }
                                connect_hangar.get(neigh).add(index_cc);
                            }
                            else if(slopes.contains(neigh)){
                                if(!connect_slopes.containsKey(neigh)){
                                    connect_slopes.put(neigh,new HashSet<>());
                                }
                                connect_slopes.get(neigh).add(index_cc);
                            }
                            else{
                                d.addFirst(neigh);
                                seen[neigh] = true;
                            }
                        }

                    }
                }
            }
        }

        int number_missed = 0;
        int D = sc.nextInt();
        Set<Integer> copy;
        for(int i=0;i<D;++i){
            a = sc.nextInt()-1;
            b = sc.nextInt()-1;
            if(connect_hangar.containsKey(a) && connect_slopes.containsKey(b)){
                copy = new HashSet<>(connect_hangar.get(a));
                copy.retainAll(connect_slopes.get(b));
                if(copy.isEmpty()){
                    number_missed += 1;
                }
            }
            else{
                number_missed += 1;
            }
        }

        System.out.println(number_missed);
    }

}
