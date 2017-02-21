# include "header.h"

struct list * insert_node(struct list * root, struct list * new_node)
{
		int balance;
		
		if(NULL == root) {
				return new_node;
		}

		if(root -> key > new_node -> key) {
				root -> left = insert_node(root -> left, new_node);
		} else {
				root -> right = insert_node( root -> right, new_node);
		}
		/* 2. Update height of this ancestor node */
		root->height = max(height(root->left), height(root->right)) + 1;

		/* 3. Get the balance factor of this ancestor node to check whether
		   this node became unbalanced */
		
		balance = getBalance(root);

		// If this node becomes unbalanced, then there are 4 cases

		// Left Left Case
		if (balance > 1 && new_node -> key < root->left->key)
				return rightRotate(root);

		// Right Right Case
		if (balance < -1 && new_node -> key > root->right->key)
				return leftRotate(root);

		// Left Right Case
		if (balance > 1 && new_node -> key > root->left->key)
		{
				root->left =  leftRotate(root->left);
				return rightRotate(root);
		}

		// Right Left Case
		if (balance < -1 && new_node -> key < root->right->key)
		{
				root->right = rightRotate(root->right);
				return leftRotate(root);
		}

		/* return the (unchanged) node pointer */
		return root;
}
